//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface VSRecognitionResult : NSObject
{
}

+ (id)recognitionResultWithModelIdentifier:(id)arg1 classIdentifiers:(id)arg2 values:(id)arg3;
+ (void)initialize;
- (id)description;
- (id)recognitionAction;
- (void)setRecognitionAction:(id)arg1;
- (id)createHandler;
- (id)valueOfFirstElementWithClassIdentifier:(id)arg1;
- (_Bool)getElementClassIdentifier:(id *)arg1 value:(id *)arg2 atIndex:(long long)arg3;
- (long long)elementCount;
- (id)modelIdentifier;
- (id)recognitionResultByReplacingValueForClassIdentifier:(id)arg1 withValue:(id)arg2;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)init;

@end

