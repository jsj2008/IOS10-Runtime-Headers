//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSUUID, TSPObject;

@protocol TSPExternalReferenceDelegate
- (TSPObject *)explicitComponentRootObjectForObject:(TSPObject *)arg1;
- (long long)componentIdentifierForObjectIdentifier:(long long)arg1 objectOrNil:(TSPObject *)arg2 objectUUIDOrNil:(NSUUID *)arg3;
- (TSPObject *)objectForIdentifier:(long long)arg1;
@end
