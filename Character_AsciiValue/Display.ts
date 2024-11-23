/*
    Author : Pakshal Shashikant Jain 
    Date : 06/08/2023
    Program : Accept character from user and display its ASCII value in decimal,
              octal and hexadecimal format.
              
              Input : A
              Output : Decimal 65
                       Octal 0101
                       Hexadecimal 0X41
*/

//Class Declaration
class AsciiValue 
{
    ch : any;

    //Constructor 
    constructor()
    {
        this.ch = ' ';
    }

    Accept()
    {
        this.ch = '^';
    }

    Display()
    {
        console.log("Decimal Value : %d",this.ch.charCodeAt());
        console.log("Hexadecimal Value : 0X"+this.ch.charCodeAt().toString(16));
        console.log("Octal Value : 0o"+this.ch.charCodeAt().toString(8));
    }
}

function main() 
{
    console.log("Jay Ganesh.....");

    var aobj = new AsciiValue();
    aobj.Accept();
    aobj.Display();
}

main();