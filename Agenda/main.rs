use std::io;

struct contact{
    nombre: String,
    numero: u16,
    direccion: String,
    like: bool,
}

let mut opcion:u8;
let mut lista:contact;
let mut temp:contact;
let mut posi:u16;
let mut positmp:u16;


fn main(){
    opcion = 0;
    poi = 0;
    positmp = 0;

    while(opcion != 6){
        menu();

        io::stdin()
            .read_line(&mut opcion)
            .expect("Error de lectura");
    }

}

fn menu(){
    println!("1. Crear contacto");
	println!("2. Lista blanca");
	println!("3. Lista negra");
	println!("4. Borrar contacto");
	println!("5. Buscar contacto");
	println!("6. Salir");
}

fn crear(){

}

fn blanca(){

}

fn negra(){

}

fn buscar(){

}

fn borrar(){

}