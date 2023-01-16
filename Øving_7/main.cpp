#include "Oppg1.h"
#include "Simple_window.h"
#include "Smiley.h"

//------------------------------------------------------------------------------'

// Size of window and emoji radius
constexpr int xmax = 1000;
constexpr int ymax = 600;
constexpr int emojiRadius = 50;

void Draw(Vector_ref<Emoji>& emoji, Graph_lib::Window & win)
{
	for (const auto i : emoji) 
	{
		i->attach_to(win);
	}
}

int main(){
	//Oppgave 1 (funker ikke når Animal blir abstrakt):
	//Animal A;
		//A.testAnimal();
	
	using namespace Graph_lib;

	const Point tl{100, 100};
	const string win_label{"Emoji factory"};
	Simple_window win{tl, xmax, ymax, win_label};

	Vector_ref<Emoji> emojivec;
	emojivec.push_back(new EmptyFace(Point{ 100, 100 }, emojiRadius));
	emojivec.push_back(new SmilingFace(Point{ 210, 100 }, emojiRadius));
	emojivec.push_back(new SadFace(Point{ 320, 100 }, emojiRadius));
	emojivec.push_back(new AngryFace(Point{ 100, 210 }, emojiRadius));
	emojivec.push_back(new WinkingFace(Point{ 210, 210 }, emojiRadius));
	emojivec.push_back(new SurprisedFace(Point{ 320, 210 }, emojiRadius));

	Draw(emojivec, win);

	win.wait_for_button();

	
}
//------------------------------------------------------------------------------