/*
    Author : Pakshal Shashikant Jain
    Date : 19/08/2023
    Program : Write a program which accept string from user and accept one
              character. Return frequency of that character.
             
              Input : “Marvellous Multi OS”
                       M
              Output : 2

              Input : “Marvellous Multi OS”
                       W
              Output : 0
*/
//Class Declaration
var CharCount = /** @class */ (function () {
    //Constructor of Class
    function CharCount() {
        this.arr = [];
        this.str = " ";
        this.ch = ' ';
    }
    //Behaviour of Class To Take Input from user
    CharCount.prototype.Accept = function () {
        this.str = "Marvellous Multi OS";
        this.arr = Array.from(this.str);
        this.ch = 'l';
    };
    //Behaviour of Find Frequencty of Entered Character in Entered String
    CharCount.prototype.Count = function () {
        var i = 0;
        var icnt = 0;
        //Logic To Find
        while (i != this.arr.length) {
            if (this.arr[i] == this.ch) {
                icnt++;
            }
            i++;
        }
        return icnt;
    };
    return CharCount;
}());
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main Function
function main() {
    var iret = 0;
    console.log("Jay Ganesh....");
    //Creating object of CharCount Class
    var cobj = new CharCount();
    //Call To Behaviour of Class
    cobj.Accept();
    iret = cobj.Count();
    //Printing Count of Entered Character
    console.log("Count of Entered Character %s in Entered String is : %d", cobj.ch, iret);
}
main();
