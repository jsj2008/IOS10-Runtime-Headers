//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSWPRuleOffset : NSObject <NSCopying>
{
    double _dX;
    double _dY;
}

+ (id)ruleOffset;
@property(readonly, nonatomic) double dY; // @synthesize dY=_dY;
@property(readonly, nonatomic) double dX; // @synthesize dX=_dX;
- (id)description;
- (struct CGSize)sizeValue;
- (struct CGPoint)pointValue;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)saveToArchive:(struct Point *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct Point *)arg1 unarchiver:(id)arg2;
- (id)init;
- (id)initWithDX:(double)arg1 dY:(double)arg2;

@end

