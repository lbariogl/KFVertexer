#ifndef HYP3FINDCONFIG_H
#define HYP3FINDCONFIG_H

const int kNBinCt = 10;
const int kNBinPt = 10;
//number of variables for the cuts
//MaxChi2 still not implemented 
const int kNVar = 3;
//number of different cuts
const int kNCut = 5;
//waiting for a better solution
//all
const float kCuts[kNVar][kNCut][3] = {{{3.5,3.5,3.5},{2.5,2.5,2.5},{4.5,4.5,4.5},{5.5,5.5,5.5},{6.5,6.5,6.5}},
{{100,100,100},{50,50,50},{75,75,75},{125,125,125},{150,150,150}},
{{0,0,0},{1,1,1},{2,2,2},{3,3,3},{4,4,4}}};
//pion
/*
const float kCuts[kNVar][kNCut][3] = {{{3.5,3.5,3.5},{3.5,3.5,2.5},{3.5,3.5,4.5},{3.5,3.5,5.5},{3.5,3.5,6.5}},
{{100,100,100},{100,100,50},{100,100,75},{100,100,125},{100,100,150}},
{{0,0,0},{0,0,1},{0,0,2},{0,0,3},{0,0,4}}};
*/
//proton
/*
const float kCuts[kNVar][kNCut][3] = {{{3.5,3.5,3.5},{3.5,2.5,3.5},{3.5,4.5,3.5},{3.5,5.5,3.5},{3.5,6.5,3.5}},
{{100,100,100},{100,50,100},{100,75,100},{100,125,100},{100,150,100}},
{{0,0,0},{0,1,0},{0,2,0},{0,3,0},{0,4,0}}};
*/
//deuteron
/*
const float kCuts[kNVar][kNCut][3] = {{{3.5,3.5,3.5},{2.5,3.5,3.5},{4.5,3.5,3.5},{5.5,3.5,3.5},{6.5,3.5,3.5}},
{{100,100,100},{50,100,100},{75,100,100},{125,100,100},{150,100,100}},
{{0,0,0},{1,0,0},{2,0,0},{3,0,0},{4,0,0}}};
*/

const float kMaxKFchi2[][3] = {{10,10,10}};
#endif
