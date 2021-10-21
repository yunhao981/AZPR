`ifndef __GLOBAL_CONFIG_HEADER__
    `define __GLOBAL_CONFIG_HEADER__

    //Active High
    // `define POSITIVE_RESET
    //Active Low 
    `define NEGATIVE_RESET 

    //Active High
    `define POSITIVE_MEMORY 
    //Active Low 
    // `define NEGATIVE_MEMORY 

    `define IMPLEMENT_TIMER
    `define IMPLEMENT_UART 
    `define IMPLEMENT_GPIO 

    `ifdef POSITIVE_RESET
        `define RESET_EDGE posedge
    `else
        `define RESET_EDGE negedge
    `endif
`endif
        

