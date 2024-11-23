/*
    Author : Pakshal Jain
    Date : 28/08/2023
    Program : Write a program which accept string from user and copy that
              characters of that string into another string by removing all white
              spaces.

              Input : "Marvel lous Pyth on"
              Output : "MarvellousPython"
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Required Libraries
var CopyString = /** @class */ (function () {
    //Constructor of Class
    function CopyString() {
        this.src = [];
        this.dest = [];
        this.str = " ";
    }
    //Behaviour of Class To Take Input from user
    CopyString.prototype.Accept = function () {
        this.str = "Marve     llous   Pyth   On";
        this.src = Array.from(this.str);
    };
    //Behaviour of Class To Copy String After Removing White Spaces
    CopyString.prototype.StrCpyX = function () {
        var i = 0;
        while (i != this.str.length) {
            if (this.src[i] != ' ') {
                this.dest[i] = this.src[i];
            }
            i++;
        }
    };
    return CopyString;
}()); //End of Class
///////////////////////////////////////////////////////////////////////////
//Main Function
function main() {
    console.log("Jay Ganesh....");
    //Creating object of CopyString Class
    var cobj = new CopyString();
    //Call To Behaviours of Class
    cobj.Accept();
    cobj.StrCpyX();
    //Printing Copied String
    console.log("String Copied After Removing White Spaces is :", cobj.dest.join(''));
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main function
main();
