/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotificationsUI.framework/NotificationsUI
 */

@interface NCInteractiveNotificationHostViewController : _UIRemoteViewController <NCInteractiveNotificationHostDelegate, NCInteractiveNotificationHostInterface> {
    NCViewServiceDescriptor *_accessoryViewService;
    float _bottomOverhangHeight;
    <NCInteractiveNotificationHostDelegate> *_delegate;
    NCViewServiceDescriptor *_inlayViewService;
    float _maximumHeight;
    BOOL _modal;
    BOOL _proximityMonitoringEnabled;
    BOOL _showsKeyboard;
}

@property (nonatomic, retain) NCViewServiceDescriptor *accessoryViewService;
@property (nonatomic) float bottomOverhangHeight;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NCInteractiveNotificationHostDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NCViewServiceDescriptor *inlayViewService;
@property (nonatomic) float maximumHeight;
@property (getter=isModal, nonatomic) BOOL modal;
@property (nonatomic) BOOL showsKeyboard;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (void)initialize;
+ (void)requestInteractiveNotificationControllerWithName:(id)arg1 bundleIdentifier:(id)arg2 context:(id)arg3 completion:(id /* block */)arg4;
+ (id)serviceViewControllerInterface;

- (void)_dismissWithContext:(id)arg1;
- (void)_proximityStateChanged:(id)arg1;
- (void)_requestDismissalEnabled:(BOOL)arg1;
- (void)_requestPreferredContentHeight:(float)arg1;
- (void)_requestProximityMonitoringEnabled:(BOOL)arg1;
- (void)_setActionEnabled:(BOOL)arg1 atIndex:(unsigned int)arg2;
- (void)_setProximityMonitoringEnabled:(BOOL)arg1;
- (id)accessoryViewService;
- (float)bottomOverhangHeight;
- (void)dealloc;
- (id)delegate;
- (void)didChangeRevealPercent:(float)arg1;
- (void)getActionContextWithCompletion:(id /* block */)arg1;
- (void)handleActionAtIndex:(int)arg1;
- (void)handleActionIdentifier:(id)arg1;
- (id)inlayViewService;
- (void)interactiveNotificationDidAppear;
- (BOOL)isModal;
- (float)maximumHeight;
- (void)setAccessoryViewService:(id)arg1;
- (void)setBottomOverhangHeight:(float)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInlayViewService:(id)arg1;
- (void)setMaximumHeight:(float)arg1;
- (void)setModal:(BOOL)arg1;
- (void)setShowsKeyboard:(BOOL)arg1;
- (BOOL)showsKeyboard;
- (void)willPresentFromActionIdentifier:(id)arg1;

@end
