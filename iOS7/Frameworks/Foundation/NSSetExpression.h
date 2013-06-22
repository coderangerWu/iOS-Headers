/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Foundation/NSExpression.h>

@interface NSSetExpression : NSExpression
{
    NSExpression *_left;
    NSExpression *_right;
}

+ (BOOL)supportsSecureCoding;
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;
- (id)_expressionWithSubstitutionVariables:(id)arg1;
- (void)acceptVisitor:(id)arg1 flags:(unsigned int)arg2;
- (id)rightExpression;
- (id)leftExpression;
- (id)predicateFormat;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)allowEvaluation;
- (void)dealloc;
- (id)initWithType:(unsigned int)arg1 leftExpression:(id)arg2 rightExpression:(id)arg3;

@end
