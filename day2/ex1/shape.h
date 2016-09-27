#ifndef SHAPE_H
#define SHAPE_H

class Shape{    // This is the base class!

    public:
        Shape();
        virtual float get_area();
    private:
        float area;
};

#endif 
