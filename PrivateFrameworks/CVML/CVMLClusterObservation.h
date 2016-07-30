//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CVML/CVMLObservation.h>

@class NSArray, NSData, NSDictionary, NSSet;

@interface CVMLClusterObservation : CVMLObservation
{
    NSArray *_clusters;
    NSArray *_suggestionsForCluster;
    NSData *_clusterState;
    NSSet *_clusteredFaceIds;
    NSDictionary *_distancesById;
}

@property(retain) NSDictionary *distancesById; // @synthesize distancesById=_distancesById;
@property(retain) NSSet *clusteredFaceIds; // @synthesize clusteredFaceIds=_clusteredFaceIds;
@property(retain) NSData *clusterState; // @synthesize clusterState=_clusterState;
@property(retain) NSArray *suggestionsForCluster; // @synthesize suggestionsForCluster=_suggestionsForCluster;
@property(retain) NSArray *clusters; // @synthesize clusters=_clusters;
- (void).cxx_destruct;

@end
