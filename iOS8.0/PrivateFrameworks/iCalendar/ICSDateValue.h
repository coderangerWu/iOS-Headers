//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@interface ICSDateValue : NSObject <NSCoding>
{
    int _year;
    int _month;
    int _day;
}

+ (id)dateFromICSString:(id)arg1;
+ (id)dateFromICSUTF8String:(const char *)arg1;
@property(readonly) int day; // @synthesize day=_day;
@property(readonly) int month; // @synthesize month=_month;
@property(readonly) int year; // @synthesize year=_year;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)icsString;
- (int)compare:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)components;
- (id)initWithYear:(int)arg1 month:(int)arg2 day:(int)arg3;
- (void)_ICSStringWithOptions:(unsigned int)arg1 appendingToString:(id)arg2;
- (int)dateType;

@end

