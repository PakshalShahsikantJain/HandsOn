/*
    Author : Pakshal Shashikant Jain
    Date : 20/08/2023
    Program : Write a program which accept string from user and accept one
              character. Return index of first occurrence of that character.
              Input : "Marvellous Multi OS"
                      'M'
              Output : 11
              
              Input : "Marvellous Multi OS"
                      'W'
              Output : -1

              Input : "Marvellous Multi OS"
                      'e'
              Output : 4
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////
//Class Declaration
var FindLast = /** @class */ (function () {
    //Constructor of Class
    function FindLast() {
        this.str = " ";
        this.arr = [];
        this.ch = ' ';
    }
    //Behaviour of Class To Take Input from user
    FindLast.prototype.Accept = function () {
        this.str = "Marvellous Mutli OS";
        this.arr = Array.from(this.str);
        this.ch = 'W';
    };
    //Behaviour of Class To Find LastOcc of Entered Character
    FindLast.prototype.LastOcc = function () {
        var i = 0;
        var ipos = -1;
        //Logic To Check
        while (i != this.str.length) {
            if (this.arr[i] == this.ch) {
                ipos = i;
            }
            i++;
        }
        return ipos;
    };
    return FindLast;
}());
////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main Function
function main() {
    var iret = 0;
    console.log("Jay Ganesh....");
    //Creating object of FindLast Class
    var fobj = new FindLast();
    //Call to Behaviour of Class
    fobj.Accept();
    iret = fobj.LastOcc();
    //Printing Last Occurance of Entered Character
    console.log("Last Occurance of Entered Character %s is at index number : %d", fobj.ch, iret);
}
///////////////////////////////////////////////////////////////////////////////////////////////////////
//Call To Main Function
main();
