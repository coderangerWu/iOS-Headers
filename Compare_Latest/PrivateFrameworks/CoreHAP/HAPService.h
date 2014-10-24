//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HAPAccessory, NSArray, NSNumber, NSString;

@interface HAPService : NSObject
{
    NSString *_type;
    NSNumber *_instanceID;
    HAPAccessory *_accessory;
    NSArray *_characteristics;
    NSArray *_includedServices;
}

+ (id)serviceTypeFromUUIDString:(id)arg1;
@property(readonly, nonatomic) NSArray *includedServices; // @synthesize includedServices=_includedServices;
@property(retain, nonatomic) NSArray *characteristics; // @synthesize characteristics=_characteristics;
@property(nonatomic) __weak HAPAccessory *accessory; // @synthesize accessory=_accessory;
@property(copy, nonatomic) NSNumber *instanceID; // @synthesize instanceID=_instanceID;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (BOOL)isEqualToService:(id)arg1;
- (id)validateAssociatedServiceType:(id)arg1;
- (BOOL)_validateMandatoryCharacteristics;
- (id)_mandatoryCharacteristicsForServiceType:(id)arg1;
- (BOOL)_validateServiceCharacteristics;
- (BOOL)_updateCharacteristic:(id)arg1;
- (BOOL)_updateAndValidateCharacteristics;
- (id)description;
- (id)initWithType:(id)arg1 instanceID:(id)arg2;
- (id)initWithType:(id)arg1 instanceID:(id)arg2 parsedCharacteristics:(id)arg3;

@end
