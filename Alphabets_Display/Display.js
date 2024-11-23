/*
    Author : Pakshal Shashikant Jain
    Date : 04/08/2023
    Program : Accept character from user. If it is capital then display all the
              characters from the input characters till Z. If input character is small
              then print all the characters in reverse order till a. In other cases
              return directly.

              Input : Q
              Output : Q R S T U V W X Y Z

              Input : m
              Output : m l k j i h g f e d c b a

              Input : 8
              Output :
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Class Decalaration
var Alphabets = /** @class */ (function () {
    //Constructor of Class
    function Alphabets() {
        this.ch = ' ';
    }
    //Behaviour of Class To Take input from user
    Alphabets.prototype.Accept = function () {
        this.ch = 'g';
    };
    //Behaviour of Class To Display Alphabets According To Given Conditions
    Alphabets.prototype.Display = function () {
        var i = 0;
        //Logic TO Display
        if ((this.ch >= 'A') && (this.ch <= 'Z')) {
            var c = 'Z';
            for (i = this.ch.charCodeAt(); i <= c.charCodeAt(); i++) {
                process.stdout.write(String.fromCharCode(i) + " ");
            }
        }
        else if ((this.ch >= 'a') && (this.ch <= 'z')) {
            var c = 'a';
            for (i = this.ch.charCodeAt(); i >= c.charCodeAt(); i--) {
                process.stdout.write(String.fromCharCode(i) + " ");
            }
        }
        else {
            return;
        }
    };
    return Alphabets;
}());
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main function
function main() {
    console.log("Jay Ganesh.....");
    //Creating object of Alphabets Class
    var aobj = new Alphabets();
    //Call To Behaviour of Class
    aobj.Accept();
    aobj.Display();
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Call To Main function
main();
