use std::io;
use scanf::scanf;

struct Contact{
    nombre: String,
    numero: u16,
    direccion: String,
    like: bool,
}

fn main(){
    let mut opcion: u16 = 0;
    let mut lista: Contact;
    let mut temp: Contact;
    let mut posi: u16 = 0;
    let mut positmp: u16 = 0;
    let mut auxstring = String::new();

    while opcion != 6{
        menu();

        if scanf!("{}", opcion).is_ok() {
        }else{
            println!("Error de lectura");
        }
        opcion = auxstring.parse().unwrap();
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
