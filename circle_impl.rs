// File: circle_impl.rs

use super::Circle;

impl Circle {
    // Constructors
    pub fn new() -> Circle {
        Circle {
            x: 0,
            y: 0,
            radius: 0,
            color: 0,
            id: 0,
        }
    }

    pub fn with_params(x: i32, y: i32, radius: i32, color: i32, id: i32) -> Circle {
        Circle {
            x,
            y,
            radius,
            color,
            id,
        }
    }

    // Setters
    pub fn set_x(&mut self, x: i32) {
        self.x = x;
    }

    pub fn set_y(&mut self, y: i32) {
        self.y = y;
    }

    pub fn set_radius(&mut self, radius: i32) {
        self.radius = radius;
    }

    pub fn set_color(&mut self, color: i32) {
        self.color = color;
    }

    pub fn set_id(&mut self, id: i32) {
        self.id = id;
    }

    // Getters
    pub fn get_x(&self) -> i32 {
        self.x
    }

    pub fn get_y(&self) -> i32 {
        self.y
    }

    pub fn get_radius(&self) -> i32 {
        self.radius
    }

    pub fn get_color(&self) -> i32 {
        self.color
    }

    pub fn get_id(&self) -> i32 {
        self.id
    }

    pub fn print(&self) {
        println!(
            "Circle (ID: {}) - Center: ({}, {}), Radius: {}, Color: {}",
            self.id, self.x, self.y, self.radius, self.color
        );
    }
}
