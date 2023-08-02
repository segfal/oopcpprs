// File: sphere_impl.rs

use super::Sphere;

impl Sphere {
    // Constructors
    pub fn new() -> Sphere {
        Sphere {
            x: 0,
            y: 0,
            z: 0,
            radius: 0,
            color: 0,
            id: 0,
        }
    }

    pub fn with_params(x: i32, y: i32, z: i32, radius: i32, color: i32, id: i32) -> Sphere {
        Sphere {
            x,
            y,
            z,
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

    pub fn set_z(&mut self, z: i32) {
        self.z = z;
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

    pub fn get_z(&self) -> i32 {
        self.z
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
            "Sphere (ID: {}) - Center: ({}, {}, {}), Radius: {}, Color: {}",
            self.id, self.x, self.y, self.z, self.radius, self.color
        );
    }
}
