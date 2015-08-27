//
//  NetverifyDocumentData.h
//  NetverifySDK
//
//  Created by iOSDev on 27/11/13.
//  Copyright (c) 2013 Jumio Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Netverify/NetverifyMrzData.h>

typedef enum {
    NVDocumentTypeUnknown       = 0,
    NVDocumentTypePassport      = 1 << 0,
    NVDocumentTypeDriverLicense = 1 << 1,
    NVDocumentTypeIdentityCard  = 1 << 2,
    NVDocumentTypeVisa          = 1 << 3
} NVDocumentType;

typedef enum {
    NVGenderUnknown,
    NVGenderM,
    NVGenderF
} NVGender;

typedef enum {
    NVDocumentVariantUnknown = 0,
    NVDocumentVariantPaper,
    NVDocumentVariantPlastic
} NVDocumentVariant;

@interface NetverifyDocumentData : NSObject {
    
}

@property (nonatomic, strong) NSString *selectedCountry;
@property (nonatomic, assign) NVDocumentType selectedDocumentType;

//ID
@property (nonatomic, strong) NSString *idNumber;
@property (nonatomic, strong) NSString *personalNumber;
@property (nonatomic, strong) NSDate *issuingDate;
@property (nonatomic, strong) NSDate *expiryDate;
@property (nonatomic, strong) NSString *issuingCountry;
@property (nonatomic, strong) NSString *optionalData1;
@property (nonatomic, strong) NSString *optionalData2;

//Person
@property (nonatomic, strong) NSString *lastName;
@property (nonatomic, strong) NSString *firstName;
@property (nonatomic, strong) NSString *middleName;
@property (nonatomic, strong) NSDate *dob;
@property (nonatomic, assign) NVGender gender;
@property (nonatomic, strong) NSString *originatingCountry;

//Address
@property (nonatomic, strong) NSString *street;
@property (nonatomic, strong) NSString *city;
@property (nonatomic, strong) NSString *state;
@property (nonatomic, strong) NSString *postalCode;

// Raw MRZ data
@property (nonatomic, strong) NetverifyMrzData *mrzData;

@property (nonatomic, assign) BOOL nameMatch;                             // Result of name comparison based on the Levenshtein distance algorithm if property name was set (default: NO)
@property (nonatomic, assign) NSInteger nameDistance;                     // The Levenshtein distance of the extracted name and the property name (default: -1).

@property (nonatomic, assign) BOOL livenessDetected;                     // returns YES when NVFaceScanViewController detected live person.

@end