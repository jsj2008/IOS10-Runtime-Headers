//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface StockDataSource : NSObject
{
    long long _identifier;
    NSString *_name;
    NSString *_sourceDescription;
}

@property(copy, nonatomic) NSString *sourceDescription; // @synthesize sourceDescription=_sourceDescription;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)description;
- (id)archiveDictionary;
@property(readonly, nonatomic) NSString *localizedSourceDescription;
- (id)initWithDictionary:(id)arg1;

@end
