//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SKUIGiftValidationResponse : NSObject
{
    NSString *_errorString;
    NSString *_giftKey;
    NSString *_totalGiftAmountString;
    _Bool _valid;
}

@property(readonly, nonatomic, getter=isValid) _Bool valid; // @synthesize valid=_valid;
@property(readonly, nonatomic) NSString *totalGiftAmountString; // @synthesize totalGiftAmountString=_totalGiftAmountString;
@property(readonly, nonatomic) NSString *giftKey; // @synthesize giftKey=_giftKey;
@property(readonly, nonatomic) NSString *errorString; // @synthesize errorString=_errorString;
- (void).cxx_destruct;
- (id)initWithValidationDictionary:(id)arg1;

@end
