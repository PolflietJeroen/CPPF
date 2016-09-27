#ifndef CIRCLE_H
#define CIRCLE_H

class Circle : public Shape
{
    public:
        Circle(float radius);
        virtual float get_area();
    private:
        float radius;
};

#endif
