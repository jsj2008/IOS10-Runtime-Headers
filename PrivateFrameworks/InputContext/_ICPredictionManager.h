//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InputContext/_ICManager-Protocol.h>

@class _ICResultCache;
@protocol _ICPredictionSource;

@interface _ICPredictionManager : NSObject <_ICManager>
{
    id <_ICPredictionSource> _myPredictionSource;
    _ICResultCache *_cache;
}

+ (id)predictionManager;
@property(retain) _ICResultCache *cache; // @synthesize cache=_cache;
- (void).cxx_destruct;
- (id)initWithPredictionSource:(id)arg1;
- (void)reset;
- (void)predictedItemSelected:(id)arg1;
- (id)_connectionsPredictionWithTrigger:(id)arg1 searchContext:(id)arg2 timeoutInMilliseconds:(int)arg3;
- (id)_eventPredictionWithTrigger:(id)arg1 searchContext:(id)arg2 timeoutInMilliseconds:(int)arg3;
- (id)_peoplePredictionWithTrigger:(id)arg1 searchContext:(id)arg2 timeoutInMilliseconds:(int)arg3;
- (id)lastCachedResultWithInitialCharacters:(id)arg1;
- (id)getContactsWithAddressBookLimit:(int)arg1 foundLimit:(int)arg2 error:(id *)arg3;
- (id)searchWithTriggers:(id)arg1 application:(id)arg2 recipient:(id)arg3 localeIdentifier:(id)arg4 timeoutInMilliseconds:(int)arg5 resultLimit:(int)arg6 error:(id *)arg7;
- (id)searchWithTrigger:(id)arg1 searchContext:(id)arg2 timeoutInMilliseconds:(int)arg3;
- (id)getPredictionSource;
- (id)init;

@end
