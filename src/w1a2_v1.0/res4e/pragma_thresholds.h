//RES4E
#pragma HLS ARRAY_PARTITION variable=thres_FPGAThresholdLayer_top complete dim=1



#pragma HLS ARRAY_PARTITION variable=thres_FPGABipolarConvThresholdLayer_br2a complete dim=1
#pragma HLS ARRAY_PARTITION variable=thres_FPGABipolarConvThresholdLayer_br2a complete dim=3



#pragma HLS ARRAY_PARTITION variable=thres_FPGABipolarConvThresholdLayer_br2b complete dim=1
#pragma HLS ARRAY_PARTITION variable=thres_FPGABipolarConvThresholdLayer_br2b complete dim=3



#pragma HLS ARRAY_PARTITION variable=thres_FPGABipolarConvThresholdLayer_br2c complete dim=1
#pragma HLS ARRAY_PARTITION variable=thres_FPGABipolarConvThresholdLayer_br2c complete dim=3


//need to do this for each pair of consecutive PEs (8 in total); physical allocated RAM will be 256+256 deep, and 32 wide per PE (16 RAMB18)

































//need to do this for each pair of consecutive PEs (16 in total); physical allocated RAM will be 288+288 deep, and 64 wide per PE (64 RAMB18)

































//need to do this for each pair of consecutive PEs (16 in total); physical allocated RAM will be 256+256 deep, and 32 wide per PE (64 RAMB18)
































