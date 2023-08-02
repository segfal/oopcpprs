// File: cylinder_impl.rs

use super::Cylinder;

impl Cylinder {
    // Constructors
    pub fn new() -> Cylinder {
        Cylinder {
            x: 0,
            y: 0,
            radius: 0,
            height: 0,
            color: 0,
            id: 0,
        }
    }

    pub fn with_params(x: i32, y: i32, radius: i32, height: i32, color: i32, id: i32) -> Cylinder {
        Cylinder {
            x,
            y,
            radius,
            height,
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

    pub fn set_height(&mut self, height: i32) {
        self.height = height;
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

    pub fn get_height(&self) -> i32 {
        self.height
    }

    pub fn get_color(&self) -> i32 {
        self.color
    }

    pub fn get_id(&self) -> i32 {
        self.id
    }

    pub fn print(&self) {
        println!(
            "Cylinder (ID: {}) - Center: ({}, {}), Radius: {}, Height: {}, Color: {}",
            self.id, self.x, self.y, self.radius, self.height, self.color
        );
    }
}
