//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PXMagazineFrame : NSObject
{
    long long _width;
    long long _height;
    double _aspectRatio;
    double _minAspectRatio;
    double _maxAspectRatio;
}

@property(nonatomic) double maxAspectRatio; // @synthesize maxAspectRatio=_maxAspectRatio;
@property(nonatomic) double minAspectRatio; // @synthesize minAspectRatio=_minAspectRatio;
@property(nonatomic) double aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(nonatomic) long long height; // @synthesize height=_height;
@property(nonatomic) long long width; // @synthesize width=_width;
- (id)description;
@property(readonly, nonatomic) long long numberOfTiles;
- (id)initWithWidth:(long long)arg1 height:(long long)arg2;

@end

