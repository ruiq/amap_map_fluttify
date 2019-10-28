//////////////////////////////////////////////////////////
// GENERATED BY FLUTTIFY. DO NOT EDIT IT.
//////////////////////////////////////////////////////////

#import <Foundation/Foundation.h>
#import <Flutter/Flutter.h>
#import <MAMapKit/MAOfflineCity.h>
#import <MAMapKit/MAOfflineItemNationWide.h>
#import <MAMapKit/MAMultiPoint.h>
#import <MAMapKit/MAMapAccessibilityIdentifier.h>
#import <MAMapKit/MAGroundOverlay.h>
#import <MAMapKit/MAPolygonRenderer.h>
#import <MAMapKit/MAPinAnnotationView.h>
#import <MAMapKit/MAHeatMapTileOverlay.h>
#import <MAMapKit/MAMapStatus.h>
#import <MAMapKit/MAPointAnnotation.h>
#import <MAMapKit/MACircle.h>
#import <MAMapKit/MAArcRenderer.h>
#import <MAMapKit/MAConfig.h>
#import <MAMapKit/MAAnnotation.h>
#import <MAMapKit/MAOfflineMapViewController.h>
#import <MAMapKit/MAMapCustomStyleOptions.h>
#import <MAMapKit/MAPolygon.h>
#import <MAMapKit/MAParticleOverlay.h>
#import <MAMapKit/MAPolyline.h>
#import <MAMapKit/MAMultiColoredPolylineRenderer.h>
#import <MAMapKit/MAAnimatedAnnotation.h>
#import <MAMapKit/MAOverlay.h>
#import <MAMapKit/MAMultiTexturePolylineRenderer.h>
#import <MAMapKit/MAOfflineProvince.h>
#import <MAMapKit/MATileOverlayRenderer.h>
#import <MAMapKit/MAOfflineItem.h>
#import <MAMapKit/MAMapVersion.h>
#import <MAMapKit/MALineDrawType.h>
#import <MAMapKit/MAGeodesicPolyline.h>
#import <MAMapKit/MATouchPoi.h>
#import <MAMapKit/MAMapKit.h>
#import <MAMapKit/MAOfflineItemMunicipality.h>
#import <MAMapKit/MAMultiPolyline.h>
#import <MAMapKit/MATraceManager.h>
#import <MAMapKit/MAMultiPointOverlayRenderer.h>
#import <MAMapKit/MAIndoorInfo.h>
#import <MAMapKit/MAPolylineRenderer.h>
#import <MAMapKit/MAAnnotationMoveAnimation.h>
#import <MAMapKit/MAShape.h>
#import <MAMapKit/MAAnnotationView.h>
#import <MAMapKit/MATileOverlay.h>
#import <MAMapKit/MACustomCalloutView.h>
#import <MAMapKit/MAOfflineItemCommonCity.h>
#import <MAMapKit/MAOfflineMap.h>
#import <MAMapKit/MACircleRenderer.h>
#import <MAMapKit/MAParticleOverlayRenderer.h>
#import <MAMapKit/MAGeometry.h>
#import <MAMapKit/MAParticleOverlayOptions.h>
#import <MAMapKit/MAOverlayRenderer.h>
#import <MAMapKit/MAUserLocation.h>
#import <MAMapKit/MAMultiPointOverlay.h>
#import <MAMapKit/MACustomBuildingOverlay.h>
#import <MAMapKit/MATraceLocation.h>
#import <MAMapKit/MAArc.h>
#import <MAMapKit/MAUserLocationRepresentation.h>
#import <MAMapKit/MAMapView.h>
#import <MAMapKit/MAOverlayPathRenderer.h>
#import <MAMapKit/MAGroundOverlayRenderer.h>
#import <MAMapKit/MACustomBuildingOverlayRenderer.h>

extern NSMutableDictionary<NSString*, NSObject*> *STACK;
extern NSMutableDictionary<NSNumber*, NSObject*> *HEAP;

@interface MACustomCalloutViewFactory : NSObject <FlutterPlatformViewFactory>
- (instancetype)initWithRegistrar:(NSObject <FlutterPluginRegistrar> *)registrar;
@end

@interface MACustomCalloutViewPlatformView : NSObject <MATraceDelegate, MAMultiPointOverlayRendererDelegate, MAMapViewDelegate, FlutterPlatformView>
- (instancetype)initWithViewId:(NSInteger)viewId registrar:(NSObject <FlutterPluginRegistrar> *)registrar;
@end
