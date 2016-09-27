#ifndef TRIANGLE_H
#define TRIANGLE_H

class Triangle : public Shape{

    public:
        Triangle(float base, float height);
        virtual float get_area();
    
    private:
        float base, height;
};

#endif 
