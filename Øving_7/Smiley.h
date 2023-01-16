#include "std_lib_facilities.h"
#pragma once
#include "Graph.h"
using namespace Graph_lib;
// Include Graph_lib library files that holds declarations needed for Window,
// and Shape derivatives.
#include "Graph.h"
#include "GUI.h"

//------------------------------------------------------------------------------'

// An abstract class. Concrete classes derived from this base class
// has to implement the member function attach_to().
class Emoji{
    public:
	    // Disable copying. Disable slicing, etc.
	    Emoji(const Emoji&) = delete;
	    Emoji& operator=(const Emoji&) = delete;

	    // Deleting the copy constructor also deletes the default constructor.
	    // Emoji needs a default constructor.
	    Emoji() {}
	    // Emoji() = default; // is an alternative way of achieving the same.

	    // The pure virtual function that has to be overriden for a deriving class
	    // to be instantiable. Every class deriving from Emoji is supposed to
	    // attach all its Shapes to a window. This makes the class abstract.
	    virtual void attach_to(Graph_lib::Window&) = 0;

	    // Relevant because Vector_ref can own Emojis and automatically cleans up.
	    // Subject will be visited later in the course.
	    virtual ~Emoji() {} //minne slettes
};

class Face : public Emoji {
	private:
		Circle face;
	public:
		void attach_to(Graph_lib::Window& win) override;
		Face(Point c, int r);
		
		Face(const Face&) = delete;
		Face& operator=(const Face&) = delete;
};

class RedFace : public Emoji {
	private:
		Circle face;
	public:
		void attach_to(Graph_lib::Window& win) override;
		RedFace(Point c, int r);
		
		RedFace(const RedFace&) = delete;
		RedFace& operator=(const RedFace&) = delete;
		virtual ~RedFace() {} //WHAT
};

class EmptyFace : public Face {
	private:
		Circle LeftEye;
		Circle RightEye;
	public:
		EmptyFace(Point c, int r);
		void attach_to(Graph_lib::Window& win) override;
};

class EmptyRedFace : public RedFace {
	private:
		Circle LeftEye;
		Circle RightEye;
	public:
		EmptyRedFace(Point c, int r);
		void attach_to(Graph_lib::Window& win) override;
};

class SmilingFace : public EmptyFace {
	private:
		Arc smile;
	public:
		SmilingFace(Point c, int r);
		void attach_to(Graph_lib::Window& win) override;
};
class SadFace : public EmptyFace {
	private:
		Arc sad;
	public:
		SadFace(Point c, int r);
		void attach_to(Graph_lib::Window& win) override;
};
class AngryFace : public EmptyRedFace {
	private:
		Arc mouth;
		int x1, y1;
		int x2, y2;
		Line leftBrow;
		Line rightBrow;
	public:
		AngryFace(Point c, int r);
		void attach_to(Graph_lib::Window& win) override;
};
class WinkingFace : public Face {
	private:
		Arc mouth;
		Circle eye;
		Open_polyline wink;
		int x1,x2;
		int y1, y2, y3;
	public:
		WinkingFace(Point c, int r);
		void attach_to(Graph_lib::Window& win) override;
};
class SurprisedFace : public EmptyFace {
	private:
		Circle mouth;
		int x1, y1;
		int x2, y2;
		Line leftBrow;
		Line rightBrow;
	public:
		SurprisedFace(Point c, int r);
		void attach_to(Graph_lib::Window& win) override;
};