#include "Smiley.h"

//------------------------------------------------------------------------------'

Face::Face(Point c, int r) : face{c, r}{
	face.set_fill_color(Color::yellow);
	face.set_color(Color::black);
}

void Face::attach_to(Graph_lib::Window& win){
	win.attach(face);
}

RedFace::RedFace(Point c, int r) : face{c, r}{
	face.set_fill_color(Color::red);
	face.set_color(Color::black);
}

void RedFace::attach_to(Graph_lib::Window& win){
	win.attach(face);
}


#pragma region EmptyFace
EmptyFace::EmptyFace(Point c, int r) : Face(c, r),
	LeftEye{ Point{ c.x - r/3, c.y - r/12 }, r/9 },
	RightEye{ Point{ c.x + r/3, c.y - r/12 }, r/9 }
{

	LeftEye.set_fill_color(Color::black);
	RightEye.set_fill_color(Color::black);

	LeftEye.set_color(Color::black);
	RightEye.set_color(Color::black);
}

void EmptyFace::attach_to(Graph_lib::Window & win)
{
	Face::attach_to(win);
	win.attach(LeftEye);
	win.attach(RightEye);
}
#pragma endregion

#pragma region EmptyRedFace
EmptyRedFace::EmptyRedFace(Point c, int r) : RedFace(c, r),
	LeftEye{ Point{ c.x - r/3, c.y - r/12 }, r/9 },
	RightEye{ Point{ c.x + r/3, c.y - r/12 }, r/9 }
{

	LeftEye.set_fill_color(Color::black);
	RightEye.set_fill_color(Color::black);

	LeftEye.set_color(Color::black);
	RightEye.set_color(Color::black);
}

void EmptyRedFace::attach_to(Graph_lib::Window & win)
{
	RedFace::attach_to(win);
	win.attach(LeftEye);
	win.attach(RightEye);
}
#pragma endregion

#pragma region SmilingFace
SmilingFace::SmilingFace(Point p, int r) : EmptyFace{ p,r }, smile{ Point{p.x, p.y + r / 5}, int(5 / 3 * r), r, 190, 340 }{
	smile.set_color(Color::black);
	smile.set_style(Line_style(Line_style::solid, 3));
}

void SmilingFace::attach_to(Graph_lib::Window & win)
{
	EmptyFace::attach_to(win);
	win.attach(smile);
}

#pragma endregion

#pragma region Sadface
SadFace::SadFace(Point p, int r) : EmptyFace{ p,r }, sad{ Point{p.x, p.y + r - r / 3}, int(4 / 3 * r), r, 20, 160 }{
	sad.set_color(Color::black);
	sad.set_style(Line_style(Line_style::solid, 3));
}

void SadFace::attach_to(Graph_lib::Window & win){
	EmptyFace::attach_to(win);
	win.attach(sad);
}
#pragma endregion

#pragma region AngryFace
AngryFace::AngryFace(Point p, int r) : EmptyRedFace{ p,r }, 
	mouth{ Point{p.x, p.y + r - r / 3}, int(4 / 3 * r), r, 20, 160 },
	x1{3 * r / 5}, y1{ 4 * r / 5 }, 
	x2{r / 8}, y2{2 * r / 4},
	leftBrow{Point{p.x - x1*2/3, p.y - y1*2/3}, Point{p.x - x2/2, p.y - y2/2}},
	rightBrow{ Point{p.x + x1*2/3, p.y - y1*2/3}, Point{p.x + x2/2, p.y - y2/2} }
{
	mouth.set_color(Color::black);
	mouth.set_style(Line_style(Line_style::solid, 3));
	leftBrow.set_color(Color::black);
	leftBrow.set_style(Line_style(Line_style::solid, 3));
	rightBrow.set_color(Color::black);
	rightBrow.set_style(Line_style(Line_style::solid, 3));
}
void AngryFace::attach_to(Graph_lib::Window & win){
	EmptyRedFace::attach_to(win);
	win.attach(mouth);
	win.attach(leftBrow);
	win.attach(rightBrow);
}
#pragma endregion

#pragma region WinkingFace
WinkingFace::WinkingFace(Point p, int r) : Face{ p,r }, 
	mouth{ Point{p.x, p.y + r / 4}, int(3 / 2 * r), r, 240, 360 },
	eye{Point{ p.x - r/3, p.y - r / 10 }, r / 9 },
	x1{p.x + r / 6}, 
	x2{p.x + 4* r / 10},
	y1{p.y - 3 * r / 8}, 
	y2{ p.y - r / 8}, 
	y3{ p.y - r / 14}{
	mouth.set_color(Color::black);
	mouth.set_style(Line_style(Line_style::solid, 3));
	eye.set_color(Color::black);
	eye.set_fill_color(Color::black);

	wink.add(Point{ x2,y1 });
	wink.add(Point{ x1, y2 });
	wink.add(Point{ x2,y3 });
	wink.set_color(Color::black);
	wink.set_style(Line_style(Line_style::solid, 3));

}
void WinkingFace::attach_to(Graph_lib::Window & win){
	Face::attach_to(win);
	win.attach(mouth);
	win.attach(eye);
	win.attach(wink);

}
#pragma endregion

#pragma region SurprisedFace
SurprisedFace::SurprisedFace(Point p, int r) : EmptyFace{ p,r }, 
	mouth{Point{ p.x, p.y+r/2}, r / 3 },
	x1{3 * r / 5}, y1{ 4 * r / 5 }, 
	x2{r / 8}, y2{5 * r / 4},
	leftBrow{Point{p.x - x1*2/3, p.y - y1*2/3}, Point{p.x - x2/3, p.y - y2/2}},
	rightBrow{ Point{p.x + x1*2/3, p.y - y1*2/3}, Point{p.x + x2/3, p.y - y2/2} }
{
	mouth.set_color(Color::black);
	mouth.set_fill_color(Color::white);
	leftBrow.set_color(Color::black);
	leftBrow.set_style(Line_style(Line_style::solid, 3));
	rightBrow.set_color(Color::black);
	rightBrow.set_style(Line_style(Line_style::solid, 3));
}
void SurprisedFace::attach_to(Graph_lib::Window & win){
	EmptyFace::attach_to(win);
	win.attach(mouth);
	win.attach(leftBrow);
	win.attach(rightBrow);
}
#pragma endregion