/*
    Author : Pakshal Shashikant Jain
    Date : 16/08/2023
    Program : Write a program which accept string from user and count number of
              white spaces
    
              Input : "MarvellouS"
              Output : 0
    
              Input : "MarvellouS Infosystems"
              Output : 1
            
              Input : "MarvellouS Infosystems by Piyush Manohar Khairnnar"
              Output : 5
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Class Declaration
var StrCountWhite = /** @class */ (function () {
    //Constructor of Class
    function StrCountWhite() {
        this.str = " ";
        this.arr = [];
    }
    //Behaviour of Class To Take Input from user
    StrCountWhite.prototype.Accept = function () {
        this.str = "MarvellouS Infosystems by Piyush Manohar Khairnnar";
        this.arr = Array.from(this.str);
    };
    //Behaviour of Class To Count Number 
    StrCountWhite.prototype.Count = function () {
        var i = 0;
        var icnt = 0;
        //Logic To Count
        while (i != this.arr.length) {
            if (this.arr[i] == ' ') {
                icnt++;
            }
            i++;
        }
        return icnt;
    };
    return StrCountWhite;
}());
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main Function
function main() {
    var iret = 0;
    console.log("Jay Ganesh.....");
    //Creating object of StrCountWhite Class 
    var sobj = new StrCountWhite();
    //Call To Behaviour of Class
    sobj.Accept();
    iret = sobj.Count();
    //Printing Count Calculated
    console.log("Count of White Spaces in Entered String is :", iret);
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Call To Main Function
main();
