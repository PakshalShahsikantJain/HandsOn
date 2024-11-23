/*
    Author : Pakshal Shashikant Jain
    Date : 24/07/2023
    Program : Accept Character from user and check whether it is digit or not
              (0-9).

              Input : 7
              Output : TRUE

              Input : d
              Output : FALSE
*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Class Declaration
var Digit = /** @class */ (function () {
    //Constructor of Class
    function Digit() {
        this.ch = ' ';
    }
    //Behaviour of Class To Accept Input from user
    Digit.prototype.Accept = function () {
        this.ch = '5';
    };
    //Behaviour of Class To Check Entered Character is Digit or not
    Digit.prototype.check = function () {
        if ((this.ch >= '0') && (this.ch <= '9')) {
            return true;
        }
        else {
            return false;
        }
    };
    return Digit;
}());
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main function
function main() {
    var bret = false;
    console.log("Jay Ganesh....");
    //Creating object of Digit Class
    var dobj = new Digit();
    //Call To Behaviour of Class
    dobj.Accept();
    bret = dobj.check();
    //Handeling Condition According Output
    if (bret == true) {
        console.log("Entered Character %s is Digit", dobj.ch);
    }
    else {
        console.log("Entered Character %s is Not A Digit", dobj.ch);
    }
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Call To Main function
main();
