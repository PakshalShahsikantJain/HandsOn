/*
    Author : Pakshal Shashikant Jain
    Date : 27/08/2023
    Program : Write a program which 2 strings from user and concat second string
              after first string. (Implement strcat() function).

              Input : "Marvellous Infosystems"
                      "Logic Building"

              Output : "Marvellous Infosystems Logic Building"
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////
//Class Declaration
var StringConcatenation = /** @class */ (function () {
    //Constructor of Class
    function StringConcatenation() {
        this.str = " ";
        this.str2 = " ";
    }
    //Behaviour of Class To Take Input from user
    StringConcatenation.prototype.Accept = function () {
        this.str = "Marvellous Mutli OS";
        this.str2 = "Infosystems";
    };
    //Behaviour of Class To Concatenate Two Strings
    StringConcatenation.prototype.Concatenation = function () {
        //Logic To Concatenate
        this.str = this.str + " " + this.str2;
    };
    return StringConcatenation;
}());
////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main Function
function main() {
    var iret = 0;
    console.log("Jay Ganesh....");
    //Creating object of StringConcatenation Class
    var cobj = new StringConcatenation();
    //Call to Behaviour of Class
    cobj.Accept();
    cobj.Concatenation();
    //Printing Concatenated String
    console.log("Concatenated String is :", cobj.str);
}
///////////////////////////////////////////////////////////////////////////////////////////////////////
//Call To Main Function
main();
