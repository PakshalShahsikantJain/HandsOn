/*
    Author : Pakshal Shashikant Jain 
    Date : 16/07/2023
    Program : Accept N numbers from user and return the largest number.
              Input : N : 6
                      Elements : 85 66 3 66 93 88
              Output : 93 
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class max
{
    //Characterstics of Class
    isize : number;
    arr : number[];

    //Constructor of Class
    constructor()
    {
        this.isize = 0;
        this.arr = [];
    }

    //Behaviour of Class To Take input from user
    Accept()
    {
        this.isize = 6;
        this.arr = [85,66,3,66,88,93];
    }

    //Behaviour of Class To Find Out Max Number 
    Maximum()
    {
        var i : number = 0;
        var imax : number = 0;

        //Logic
        imax = this.arr[0];
        for(i = 0;i < this.isize;i++)
        {
            if(this.arr[i] > imax) 
            {
                imax = this.arr[i];
            }
        }

        return imax;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
function main()
{
    var iret : number = 0;

    console.log("Ganapati Bappa Morya.....");

    //Creating object of Max Class
    var mobj = new max();

    //Call To Behaviours of Class
    mobj.Accept()
    iret = mobj.Maximum();
    console.log("Maximum Number from Entered N Numbers is : %d",iret);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Call To Main function
main();