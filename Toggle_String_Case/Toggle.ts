/*
    Author : Pakshal Shashikant Jain 
    Date : 13/08/2023
    Program : Write a program which accept string from user and toggle the case.
              
              Input : "Marvellous Multi OS"
              Output : mARVELLOUS mULTI os
*/

//Class Declaration
class Toggle
{
    //Characteristisc of Class
    str : string;
    arr : any[];

    //Constructor of Class
    constructor()
    {
        this.str = " ";
        this.arr = [];
    }

    //Behaviour of Class to Take Input from user
    Accept()
    {
        this.str = "Marvellous Multi OS";
        this.arr = Array.from(this.str);
    }

    //Behaviour of Class to Toggle Case 
    Convert()   
    {
        var i : number = 0;
        var ascii : number = 0;

        //Logic To Convert 
        while(i != this.arr.length)
        {
            if((this.arr[i] >= 'a')&&(this.arr[i] <= 'z'))
            {
                ascii = this.arr[i].charCodeAt() - 32;
                
                this.arr[i] = String.fromCharCode(ascii);
            }
            else if((this.arr[i] >= 'A')&&(this.arr[i] <= 'Z'))
            {
                ascii = this.arr[i].charCodeAt() + 32;
                
                this.arr[i] = String.fromCharCode(ascii);
            }

            i++;
        }
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
function main() 
{
    console.log("Jay Ganesh......");

    //Creating object of Toggle  Class
    var tobj = new Toggle();

    //Call To Behaviour of Class
    tobj.Accept();
    tobj.Convert();

    //Printing Modified String 
    console.log("Modified String is :",tobj.arr.join(""));
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Call To Main Function
main();

