// File: rectangle_impl.rs

use super::Rectangle;

impl Rectangle {
    // Constructors
    pub fn new() -> Rectangle {
        Rectangle {
            x: 0,
            y: 0,
            width: 0,
            height: 0,
            color: 0,
            id: 0,
        }
    }

    pub fn with_params(x: i32, y: i32, width: i32, height: i32, color: i32, id: i32) -> Rectangle {
        Rectangle {
            x,
            y,
            width,
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

    pub fn set_width(&mut self, width: i32) {
        self.width = width;
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

    pub fn get_width(&self) -> i32 {
        self.width
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
            "Rectangle (ID: {}) - Position: ({}, {}), Width: {}, Height: {}, Color: {}",
            self.id, self.x, self.y, self.width, self.height, self.color
        );
    }
}
