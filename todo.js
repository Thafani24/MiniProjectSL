new Vue({
    el:"#thaff",
    data(){
        return{
            tasklist:[],
            task:"",  
            color:""
        }
    },

    methods:{
        // adding task function
        addTask:function()
        {
            
                
            if (this.task != ""){
                this.tasklist.push(this.task);
                this.task=""; // to empty the input box after the value submitted
                this.color="#99FFCC"; // light green color
            }else{
                this.color="#D5A6BD";  // light purple
            }
        },

        // removing task function
        removeTask:function(index){
            this.tasklist.splice(index,1)
        }

    }
})