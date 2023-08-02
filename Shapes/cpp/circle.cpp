Circle::Circle() {
    this->x = 0;
    this->y = 0;
    this->radius = 0;
    this->color = 0;
    this->id = 0;
}

Circle::Circle(int x, int y, int radius, int color, int id) {
    this->x = x;
    this->y = y;
    this->radius = radius;
    this->color = color;
    this->id = id;
}

Circle::~Circle() {
    // std::cout << "Circle destructor called" << std::endl;
}

// Setters
void Circle::setX(int x) {
    this->x = x;
}

void Circle::setY(int y) {
    this->y = y;
}

void Circle::setRadius(int radius) {
    this->radius = radius;
}

void Circle::setColor(int color) {
    this->color = color;
}


void Circle::setId(int id) {
    this->id = id;
}

// Getters
int Circle::getX() {
    return this->x;
}

int Circle::getY() {
    return this->y;
}

int Circle::getRadius() {
    return this->radius;
}

int Circle::getColor() {
    return this->color;
}

int Circle::getId() {
    return this->id;
}

void Circle::print() {
    std::cout << "Circle " << this->id << std::endl;
    std::cout << "Center: (" << this->x << ", " << this->y << ")" << std::endl;
    std::cout << "Radius: " << this->radius << std::endl;
    std::cout << "Color: " << this->color << std::endl;
}
