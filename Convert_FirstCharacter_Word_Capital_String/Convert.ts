/*
    Author : Pakshal Shashikant Jain
    Date : 30/09/2023
    Program : Write a program which accept string from user and replace each
              occurrence of first character of each word into capital case.
    
              Input : "marvellous infosystems by Piyush khairnar"
              Output : "Marvellous Infosystems By Piyush Khairnar"
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class StringConvert
{
    //Characteristics of Class
    str : string;
    arr : any[];

    //Constructor of Class
    constructor()
    {
        this.str = " ";
        this.arr = [];
    }

    //Behaviour of Class To Take input from user
    Accept()
    {
        this.str = "pakshal shashikant jain";
        this.arr = Array.from(this.str);
    }
    
    //Behaviour of Class To Convert String
    StrCap()
    {
        var i : number = 0;
        var ascii : number = 0; 

        //Logic To Convert
        if((this.arr[i] >= 'a')&&(this.arr[i] <= 'z'))
        {
            ascii = this.arr[i].charCodeAt() - 32;
            this.arr[i] = String.fromCharCode(ascii);
        }
        while(i != this.arr.length)
        {
            if(this.arr[i] == ' ')
            {
                while((this.arr[i] == ' ')&&(i != this.arr.length))
                {
                    i++;
                }

                if((this.arr[i] >= 'a')&&(this.arr[i] <= 'z'))
                {
                    ascii = this.arr[i].charCodeAt() - 32;
                    this.arr[i] = String.fromCharCode(ascii);        
                }
            }
            i++;
        }
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
function main()
{
    console.log("Jay Ganesh....");

    //Creating object of StringConvert Class
    var sobj = new StringConvert();

    //Call To Behaviours of Class
    sobj.Accept();
    sobj.StrCap();

    //Printing Modified String
    console.log("Modified string is : ",sobj.arr.join(""));
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Call To Main Function
main();