//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <CameraUI/CAMCaptureResultDelegate-Protocol.h>
#import <CameraUI/CAMPersistenceResultDelegate-Protocol.h>
#import <CameraUI/CAMViewfinderReviewButtonSource-Protocol.h>
#import <CameraUI/NSCoding-Protocol.h>
#import <CameraUI/NSSecureCoding-Protocol.h>

@class CAMBurstController, CAMIrisVideoController, CAMKeepAliveController, CAMLocationController, CAMMotionController, CAMNebulaDaemonProxyManager, CAMPersistenceController, CAMPowerController, CAMProtectionController, CAMRemoteShutterController, CAMReviewButton, CAMThumbnailGenerator, CAMTimelapseController, CAMViewfinderViewController, CUCaptureController, NSMutableDictionary, NSObject, NSString;
@protocol CAMCameraCaptureDelegate, CAMCameraConfigurationDelegate, CAMCameraViewControllerPresentationDelegate, OS_dispatch_queue;

@interface CAMCameraViewController : UIViewController <CAMCaptureResultDelegate, CAMPersistenceResultDelegate, CAMViewfinderReviewButtonSource, NSCoding, NSSecureCoding>
{
    _Bool __didSuspendCameraSessionForViewDisappearance;
    _Bool _automaticallyManagesCameraSession;
    id <CAMCameraConfigurationDelegate> _configurationDelegate;
    id <CAMCameraCaptureDelegate> _captureDelegate;
    CUCaptureController *_captureController;
    CAMTimelapseController *_timelapseController;
    CAMPersistenceController *_persistenceController;
    CAMMotionController *_motionController;
    CAMLocationController *_locationController;
    CAMPowerController *_powerController;
    CAMBurstController *_burstController;
    CAMKeepAliveController *_keepAliveController;
    CAMProtectionController *_protectionController;
    CAMRemoteShutterController *_remoteShutterController;
    CAMNebulaDaemonProxyManager *_nebulaDaemonProxyManager;
    CAMIrisVideoController *_irisVideoController;
    CAMReviewButton *__reviewButton;
    NSObject<OS_dispatch_queue> *__resultProcessingQueue;
    NSMutableDictionary *__resultQueuePendingLivePhotoProperties;
    CAMThumbnailGenerator *__resultQueueThumbnailGenerator;
    CAMViewfinderViewController *_viewfinderViewController;
    id <CAMCameraViewControllerPresentationDelegate> _presentationDelegate;
}

+ (_Bool)isEmulatingImagePicker;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) __weak id <CAMCameraViewControllerPresentationDelegate> presentationDelegate; // @synthesize presentationDelegate=_presentationDelegate;
@property(nonatomic) _Bool automaticallyManagesCameraSession; // @synthesize automaticallyManagesCameraSession=_automaticallyManagesCameraSession;
@property(readonly, nonatomic) CAMViewfinderViewController *viewfinderViewController; // @synthesize viewfinderViewController=_viewfinderViewController;
@property(readonly, nonatomic) CAMThumbnailGenerator *_resultQueueThumbnailGenerator; // @synthesize _resultQueueThumbnailGenerator=__resultQueueThumbnailGenerator;
@property(readonly, nonatomic) NSMutableDictionary *_resultQueuePendingLivePhotoProperties; // @synthesize _resultQueuePendingLivePhotoProperties=__resultQueuePendingLivePhotoProperties;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_resultProcessingQueue; // @synthesize _resultProcessingQueue=__resultProcessingQueue;
@property(readonly, nonatomic) CAMReviewButton *_reviewButton; // @synthesize _reviewButton=__reviewButton;
@property(nonatomic, setter=_setDidSuspendCameraSessionForViewDisappearance:) _Bool _didSuspendCameraSessionForViewDisappearance; // @synthesize _didSuspendCameraSessionForViewDisappearance=__didSuspendCameraSessionForViewDisappearance;
@property(readonly, nonatomic) CAMIrisVideoController *irisVideoController; // @synthesize irisVideoController=_irisVideoController;
@property(readonly, nonatomic) CAMNebulaDaemonProxyManager *nebulaDaemonProxyManager; // @synthesize nebulaDaemonProxyManager=_nebulaDaemonProxyManager;
@property(readonly, nonatomic) CAMRemoteShutterController *remoteShutterController; // @synthesize remoteShutterController=_remoteShutterController;
@property(readonly, nonatomic) CAMProtectionController *protectionController; // @synthesize protectionController=_protectionController;
@property(readonly, nonatomic) CAMKeepAliveController *keepAliveController; // @synthesize keepAliveController=_keepAliveController;
@property(readonly, nonatomic) CAMBurstController *burstController; // @synthesize burstController=_burstController;
@property(readonly, nonatomic) CAMPowerController *powerController; // @synthesize powerController=_powerController;
@property(readonly, nonatomic) CAMLocationController *locationController; // @synthesize locationController=_locationController;
@property(readonly, nonatomic) CAMMotionController *motionController; // @synthesize motionController=_motionController;
@property(readonly, nonatomic) CAMPersistenceController *persistenceController; // @synthesize persistenceController=_persistenceController;
@property(readonly, nonatomic) CAMTimelapseController *timelapseController; // @synthesize timelapseController=_timelapseController;
@property(readonly, nonatomic) CUCaptureController *captureController; // @synthesize captureController=_captureController;
@property(nonatomic) __weak id <CAMCameraCaptureDelegate> captureDelegate; // @synthesize captureDelegate=_captureDelegate;
@property(nonatomic) __weak id <CAMCameraConfigurationDelegate> configurationDelegate; // @synthesize configurationDelegate=_configurationDelegate;
- (void).cxx_destruct;
- (id)reviewButton;
- (void)handleReviewButtonReleased:(id)arg1;
- (void)persistenceController:(id)arg1 didCompleteAllLocalPersistenceForRequest:(id)arg2;
- (void)persistenceController:(id)arg1 didGenerateVideoLocalPersistenceResult:(id)arg2 forCaptureResult:(id)arg3 fromRequest:(id)arg4;
- (void)persistenceController:(id)arg1 didGenerateStillImageLocalPersistenceResult:(id)arg2 forCaptureResult:(id)arg3 fromRequest:(id)arg4;
- (id)_behaviorDefinedDestinationURLForRequest:(id)arg1 withLocalDestinationURL:(id)arg2 linkedDestinationURL:(id)arg3;
- (void)captureController:(id)arg1 didGenerateStillImageCaptureResult:(id)arg2 fromRequest:(id)arg3;
- (id)_clientPropertiesForVideoURL:(id)arg1 duration:(CDStruct_1b6d18a9)arg2 size:(struct CGSize)arg3 creationDate:(id)arg4 captureOrientation:(long long)arg5 previewSurface:(void *)arg6 previewOrientation:(long long)arg7 adjustments:(id)arg8 uniqueIdentifier:(id)arg9 forLivePhoto:(_Bool)arg10;
- (id)_clientPropertiesForLivePhotoVideoURL:(id)arg1 duration:(CDStruct_1b6d18a9)arg2 uniqueIdentifier:(id)arg3;
- (id)_clientPropertiesForStillImageWithURL:(id)arg1 metadata:(id)arg2 creationDate:(id)arg3 captureOrientation:(long long)arg4 fullsizeSurface:(void *)arg5 fullsizeSize:(unsigned long long)arg6 previewSurface:(void *)arg7 previewOrientation:(long long)arg8 uniqueIdentifier:(id)arg9 forOriginal:(_Bool)arg10 livePhoto:(_Bool)arg11;
- (void)_notifyCaptureDelegateOfCompletedCaptureOfLivePhoto:(id)arg1 withProperties:(id)arg2 error:(id)arg3;
- (void)_resultQueueHandleFallbackPhotoForPairingIdentifierIfNecessary:(id)arg1;
- (id)_resultQueueProcessLivePhotoForPairingIdentifier:(id)arg1 combinedProperties:(out id *)arg2 error:(id *)arg3;
- (_Bool)_resultQueueUpdatePendingLivePhotoForPairingIdentifier:(id)arg1 withProperties:(id)arg2;
- (_Bool)_couldProvidePendingLivePhotoUpdateForPairingIdentifier:(id)arg1 withProperties:(id)arg2;
- (void)_notifyCaptureDelegateOfCompletedCaptureOfPhoto:(id)arg1 withProperties:(id)arg2 error:(id)arg3;
- (id)_resultQueueSafeImageFromSurface:(void *)arg1 imageOrientation:(long long)arg2;
- (unsigned long long)_capturePersistenceBehaviorForViewfinderPersistenceBehavior:(unsigned long long)arg1;
- (unsigned long long)_viewfinderPersistenceBehaviorForCapturePersistenceBehavior:(unsigned long long)arg1;
@property(nonatomic) _Bool automaticallyAdjustsApplicationIdleTimer;
@property(nonatomic) unsigned long long persistenceBehavior;
@property(nonatomic, getter=isDisablingMultipleCaptureFeatures) _Bool disablingMultipleCaptureFeatures;
- (void)resumeCameraSession;
- (void)suspendCameraSession;
- (_Bool)stopRecording;
- (_Bool)startRecording;
- (_Bool)capturePhoto;
@property(readonly, nonatomic, getter=isRecording) _Bool recording;
@property(nonatomic) long long livePhotoMode;
@property(nonatomic) long long timerDuration;
@property(nonatomic, setter=setHDRMode:) long long hdrMode;
@property(nonatomic) long long torchMode;
@property(nonatomic) long long flashMode;
- (void)configureForCaptureMode:(long long)arg1 captureDevice:(long long)arg2;
@property(readonly, nonatomic) long long captureDevice;
@property(readonly, nonatomic) long long captureMode;
- (id)childViewControllerForStatusBarHidden;
- (long long)preferredStatusBarUpdateAnimation;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithInitialLayoutStyle:(long long)arg1;
- (id)initWithCustomLaunchOptions:(id)arg1 usingEmulationMode:(long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)_commonCAMCameraViewControllerInitializationWithLaunchOptions:(id)arg1 usingEmulationMode:(long long)arg2 initialLayoutStyle:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

