/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface HourlyForecast : NSObject
{
    NSString *_time24Hour;
    NSString *_temperature;
    int _conditionCode;
    float _percentPrecipitation;
}

@property(nonatomic) float percentPrecipitation; // @synthesize percentPrecipitation=_percentPrecipitation;
@property(nonatomic) int conditionCode; // @synthesize conditionCode=_conditionCode;
@property(copy, nonatomic) NSString *temperature; // @synthesize temperature=_temperature;
@property(copy, nonatomic) NSString *time24Hour; // @synthesize time24Hour=_time24Hour;
- (id)description;
- (void)dealloc;

@end

