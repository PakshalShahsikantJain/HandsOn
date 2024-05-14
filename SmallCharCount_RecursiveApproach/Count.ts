/*
    Author : Pakshal Shashiaknt Jain
    Date : 13/05/2024
    Program : Write a recursive program which accept string from user and count number of small characters.
              
              Input : HElloWOrlD
              Output : 5
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class StringSmall 
{
    //Characteristics of Class
    i : number;
    icnt : number;
    str : string;

    //Constructor of Class
    constructor(svalue : string)
    {
        this.i = 0;
        this.icnt = 0;
        this.str = svalue;
    }

    //Behaviour of Class To Count Small Characters
    Count() : number
    {
        var arr : string[] = [];
        arr = Array.from(this.str);

        //Logic To Count
        if(this.i != arr.length)
        {
            if((arr[this.i] >= 'a')&&(arr[this.i]  <= 'z'))
            {
                this.icnt++;
            }
            this.i++;

            //Recursive Function Call To Behaviour of Class
            this.Count();
        }
        
        return this.icnt;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
function main() 
{
    var str : string = "Seju Nair";
    var iret : number = 0;

    console.log("Jay Ganesh....");

    //Creating object of StringSmall Class
    var sobj : StringSmall = new StringSmall(str);
    //Call To Behaviour of Class
    iret = sobj.Count();

    //Printing Count
    console.log("Count of Small Characters Present in String %s is : %d",str,iret);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Call To Main Function
main();