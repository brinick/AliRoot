#ifndef ALIITSVPPRCOARSESYMM_H
#define ALIITSVPPRCOARSESYMM_H
/* Copyright(c) 1998-1999, ALICE Experiment at CERN, All rights reserved. *
 * See cxx source for full Copyright notice                               */

/* $Id$ */

/////////////////////////////////////////////////////////
//  Manager and hits classes for set: ITS version 7    //
/////////////////////////////////////////////////////////
 
#include "AliITS.h"
 
class AliITSvPPRcoarsesymm : public AliITS {

 public:
    AliITSvPPRcoarsesymm();
    AliITSvPPRcoarsesymm(const char *name, const char *title);
    AliITSvPPRcoarsesymm(const AliITSvPPRcoarsesymm &source); // copy constructor
    AliITSvPPRcoarsesymm& operator=(const AliITSvPPRcoarsesymm &source); // assignment operator
    virtual       ~AliITSvPPRcoarsesymm() ;
    virtual void   BuildGeometry();
    virtual void   CreateGeometry();
    virtual void   CreateMaterials();
    virtual void   Init(); 
    virtual Int_t  IsVersion() const {
      // returns the ITS version number 
      return 7;
    } 
    virtual void   DrawModule();
    virtual void   StepManager();
    virtual void   SetRails(Int_t v=1){ 
	 // Set flag for rails
	 fRails = v;}	 
    virtual void   SetSupportMaterial(Int_t v=0){ 
	 // Set material of the services supports
	 fSuppMat = v;}	     
    virtual Int_t GetRails(){ 
	 // Get flag for rails
	 return fRails;}	
    virtual Int_t GetSupportMaterial(){ 
	 // Get material of the services supports 
	 return fSuppMat;}	 	   	    
    virtual Int_t GetMajorVersion(){// return Major Version Number
	return fMajorVersion;}
    virtual Int_t GetMinorVersion(){// return Major Version Number
	return fMinorVersion;}


 private:
    Int_t  fMajorVersion;     // Major version number == IsVersion
    Int_t  fMinorVersion;     // Minor version number
    Int_t  fRails;            // flag to switch rails on (=1) and off (=0)
    Int_t  fSuppMat;          // flag to change the material of the services
                              // supports (=0 copper, =1 aluminum, =2 carbon)
			          
    ClassDef(AliITSvPPRcoarsesymm,1)  //Hits manager for set:ITS version 7 
                                       // PPR coarse Geometry symmetric
};
 
#endif
