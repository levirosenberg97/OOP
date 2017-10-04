#include "ScoreBoard.h"
#include "sfwdraw.h"
#include <string>
#include"TapBar.h"
#include <fstream>
#include <iostream>
#include<Windows.h>
#include<cstring>

using namespace std;





void ScoreBoard::update(Spawner cir)
{
	if (cir.counter <= 0.0f)
	{
		if (posX != 520)
		{
			posX--;
		}

		if (posY != 440)
		{
			posY--;
		}

		if (dimY != 50)
		{
			dimY++;
		}

		if (dimX != 50)
		{
			dimX ++;
		}
		highScore();
	}

}

void ScoreBoard::draw(Multiplier sp)
{
	std::string multi = std::to_string(sp.multiplier);

	std::string ScoreText = std::to_string(score);

	sfw::drawString(sfw::loadTextureMap("fontmap.png", 16, 16), "X", 1140, 600, 30, 30);

	sfw::drawString(sfw::loadTextureMap("fontmap.png", 16, 16), ScoreText.c_str(), posX, posY, dimX, dimY);

	sfw::drawString(sfw::loadTextureMap("fontmap.png", 16, 16), multi.c_str(), 1200, 600, 30, 30);
}

void ScoreBoard::SetSCore(Multiplier m)
{
	score = m.score;
}

void ScoreBoard::highScore()
{
	fstream file;
	string buffer;

	int arr[5];
	string narr[5];

	int line = 1;
	bool even = false;
	char in[3];

	system("CLS");

	file.open("Score.txt");

	if (file.fail())
	{
		cout << "File not Found" << endl;
	}

	while (getline(file, buffer) && line < 11)
	{
		int check = line % 2;
		if (check == 0)
		{
			narr[(line - 2) / 2] = buffer;
			even = false;
		}
		else
		{
			arr[(line - 1) / 2] = stoi(buffer);
			even = true;
		}
		line++;
	}
	file.close();

	bool topscore = false;

	for (int i = 0; i < 5; i++)
	{
		if (score >= arr[i] && topscore == false)
		{
			topscore = true;
		}
		else
		{
			topscore = false;
		}
	}

	if (topscore == true)
	{
		
			
			sfw::drawString(sfw::loadTextureMap("fontmap.png", 16, 16), "You Got a Top 5 Score\n Enter 3 Letters to Log your Score: ", 200, 900, 40, 40);
			cout << "You Got a Top 5 Score\n Enter 3 Letters to Log your Score: " << endl;
			cin >> in;
			sfw::drawString(sfw::loadTextureMap("fontmap.png", 16, 16), in, 200, 700, 40, 40);
		

		for (int i = 0; i < 5; i++)
		{
			if (score >= arr[i])
			{
				if (i == 4)
				{
					arr[i] = score;
					narr[i] = in;
				}
				else
				{
					for (int j = 4; j > i; --j)
					{
						arr[j] = arr[j - 1];
						narr[j] = narr[j - 1];
					}
					arr[i] = score;
					narr[i] = in;
				}
				i = 4;
			}
		}
	}
	else
	{
		sfw::drawString(sfw::loadTextureMap("fontmap.png", 16, 16), "You did Not Get a High Score", 300, 900, 40, 40);
	}
	
	string scoreArr1 = to_string(arr[0]);
	string scoreArr2 = to_string(arr[1]);
	string scoreArr3 = to_string(arr[2]);
	string scoreArr4 = to_string(arr[3]);
	string scoreArr5 = to_string(arr[4]);

	sfw::drawString(sfw::loadTextureMap("fontmap.png", 16, 16), narr[0].c_str(), 700, 900, 40, 40);
	sfw::drawString(sfw::loadTextureMap("fontmap.png", 16, 16), narr[1].c_str(), 700, 800, 40, 40);
	sfw::drawString(sfw::loadTextureMap("fontmap.png", 16, 16), narr[2].c_str(), 700, 700, 40, 40);
	sfw::drawString(sfw::loadTextureMap("fontmap.png", 16, 16), narr[3].c_str(), 700, 600, 40, 40);
	sfw::drawString(sfw::loadTextureMap("fontmap.png", 16, 16), narr[4].c_str(), 700, 500, 40, 40);

	sfw::drawString(sfw::loadTextureMap("fontmap.png", 16, 16), scoreArr1.c_str(), 900, 900, 40, 40);
	sfw::drawString(sfw::loadTextureMap("fontmap.png", 16, 16), scoreArr2.c_str(), 900, 800, 40, 40);
	sfw::drawString(sfw::loadTextureMap("fontmap.png", 16, 16), scoreArr3.c_str(), 900, 700, 40, 40);
	sfw::drawString(sfw::loadTextureMap("fontmap.png", 16, 16), scoreArr4.c_str(), 900, 600, 40, 40);
	sfw::drawString(sfw::loadTextureMap("fontmap.png", 16, 16), scoreArr5.c_str(), 900, 500, 40, 40);





	file.open("Score.txt", ios::out);

	even = false;

	for (line = 1; line < 11; line++)
	{
		int check = line % 2;
		if (check == 0)
		{
			narr[(line - 2) / 2];
			file << narr[(line - 2) / 2] << endl;
			even = false;
		}
		else
		{
			arr[(line - 1) / 2];
			file << arr[(line - 1) / 2] << endl;
			even = true;
		}
	}
	file.close();
	

	exit(0);

}

void timedPause(int millisec)
{
	Sleep(millisec);
}
