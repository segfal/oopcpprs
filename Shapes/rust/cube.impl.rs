// File: cube_impl.rs

use super::Cube;

impl Cube {
    // Constructors
    pub fn new() -> Cube {
        Cube {
            x: 0,
            y: 0,
            z: 0,
            side: 0,
            color: 0,
            id: 0,
        }
    }

    pub fn with_params(x: i32, y: i32, z: i32, side: i32, color: i32, id: i32) -> Cube {
        Cube {
            x,
            y,
            z,
            side,
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

    pub fn set_z(&mut self, z: i32) {
        self.z = z;
    }

    pub fn set_side(&mut self, side: i32) {
        self.side = side;
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

    pub fn get_z(&self) -> i32 {
        self.z
    }

    pub fn get_side(&self) -> i32 {
        self.side
    }

    pub fn get_color(&self) -> i32 {
        self.color
    }

    pub fn get_id(&self) -> i32 {
        self.id
    }

    pub fn print(&self) {
        println!(
            "Cube (ID: {}) - Center: ({}, {}, {}), Side: {}, Color: {}",
            self.id, self.x, self.y, self.z, self.side, self.color
        );
    }
}
