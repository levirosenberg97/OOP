#pragma once

class Circle
{
public:
	float posX;     // position on the x-axis
	float posY;     // position on the y-axis

	float radius;   // describes the size of the circle

	void draw();    // draws the circle
};


class Line
{
public:
	float startX;   // start-position on the x-axis
	float startY;   // start-position on the y-axis

	float endX;     // end-position on the x-axis
	float endY;     // end-position on the y-axis

	void draw();    // draws the line
};


class Box
{
public:
	
	float bleftX;
	float bleftY;

	float toprigX;
	float toprigY;

	void draw();    // draws the box
};