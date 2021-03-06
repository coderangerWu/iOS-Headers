//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class HDSQLitePredicate, NSArray, NSString;

@interface HDSQLiteQueryDescriptor : NSObject <NSCopying>
{
    BOOL _returnsDistinctEntities;
    Class _entityClass;
    int _limitCount;
    NSArray *_orderingDirections;
    NSArray *_orderingProperties;
    HDSQLitePredicate *_predicate;
    NSString *_groupBy;
}

@property(copy, nonatomic) NSString *groupBy; // @synthesize groupBy=_groupBy;
@property(copy, nonatomic) HDSQLitePredicate *predicate; // @synthesize predicate=_predicate;
@property(nonatomic) BOOL returnsDistinctEntities; // @synthesize returnsDistinctEntities=_returnsDistinctEntities;
@property(copy, nonatomic) NSArray *orderingProperties; // @synthesize orderingProperties=_orderingProperties;
@property(copy, nonatomic) NSArray *orderingDirections; // @synthesize orderingDirections=_orderingDirections;
@property(nonatomic) int limitCount; // @synthesize limitCount=_limitCount;
@property(nonatomic) Class entityClass; // @synthesize entityClass=_entityClass;
- (id)_newSelectSQLWithProperties:(id)arg1 columns:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

