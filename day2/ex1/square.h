#ifndef SQUARE_H
#define SQUARE_H


class Square : public Shape{
    public:
        Square(float side);
        virtual float get_area();
    private:
        float side;
};

#endif 
