//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFImageIconDescriptor.h>

#import <Home/HFIconDescriptor-Protocol.h>

@class NSDictionary, NSString;

@interface HFMultistateImageIconDescriptor : HFImageIconDescriptor <HFIconDescriptor>
{
    NSDictionary *_imageIdentifiersKeyedByPrimaryState;
}

@property(retain, nonatomic) NSDictionary *imageIdentifiersKeyedByPrimaryState; // @synthesize imageIdentifiersKeyedByPrimaryState=_imageIdentifiersKeyedByPrimaryState;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)imageIdentifierForPrimaryState:(long long)arg1;
- (id)initWithImageIdentifiersKeyedByPrimaryState:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly) Class superclass;

@end

