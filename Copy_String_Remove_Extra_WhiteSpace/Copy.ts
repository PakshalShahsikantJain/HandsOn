/*
    Author : Pakshal Shshikant Jain
    Date : 30/09/2023
    Program : Write a program which accept string from user and copy the
              contents into another string by removing extra white spaces.
                
              Input : Marvellous        multi          OS”
              Output : Marvellous multi OS”

*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class StringCopy
{
    //Characteristics of Class
    str : string;
    arr : any[];
    brr : any[];
    
    //Constructor of Class
    constructor()
    {
        this.str = " ";
        this.arr = [];
        this.brr = [];
    }

    //Behaviour of Class To Take input from user
    Accept()
    {
        this.str = "Pakshal            Jain";
        this.arr = Array.from(this.str);
    }

    //Behaviour of Class To Copy String After Removing White Spaces
    StrCpyX()
    {
        var i : number = 0;
        var j : number = 0;

        if((this.arr == null)&&(this.brr == null))
        {
            return;
        }

        //Logic To Copy String
        while(i != this.arr.length)
        {
            if(this.arr[i] == ' ')
            {
                while((this.arr[i] == ' ')&&(i != this.arr.length))
                {
                    i++;
                }
                this.brr[j] = ' ';
                j++;
            }

            this.brr[j] = this.arr[i];
            j++;
            i++;
        }
    }
}//End of Class

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
function main() 
{
    console.log("Jay Ganesh....");

    //Creating object of StringCpoy Class
    var sobj = new StringCopy();

    //Call To Behaviours of Class
    sobj.Accept();
    sobj.StrCpyX();

    //Printing Copied String
    console.log("Copied String is :",sobj.brr.join(""));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Call To Main Function
main();