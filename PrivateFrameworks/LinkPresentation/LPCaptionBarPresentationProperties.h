//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LPCaptionRowPresentationProperties, LPImage;

@interface LPCaptionBarPresentationProperties : NSObject
{
    LPImage *_leadingIcon;
    LPImage *_trailingIcon;
    LPCaptionRowPresentationProperties *_aboveTop;
    LPCaptionRowPresentationProperties *_top;
    LPCaptionRowPresentationProperties *_bottom;
    LPCaptionRowPresentationProperties *_belowBottom;
}

@property(readonly, retain, nonatomic) LPCaptionRowPresentationProperties *belowBottom; // @synthesize belowBottom=_belowBottom;
@property(readonly, retain, nonatomic) LPCaptionRowPresentationProperties *bottom; // @synthesize bottom=_bottom;
@property(readonly, retain, nonatomic) LPCaptionRowPresentationProperties *top; // @synthesize top=_top;
@property(readonly, retain, nonatomic) LPCaptionRowPresentationProperties *aboveTop; // @synthesize aboveTop=_aboveTop;
@property(retain, nonatomic) LPImage *trailingIcon; // @synthesize trailingIcon=_trailingIcon;
@property(retain, nonatomic) LPImage *leadingIcon; // @synthesize leadingIcon=_leadingIcon;
- (void).cxx_destruct;
- (_Bool)hasAnyContent;
- (id)init;

@end
